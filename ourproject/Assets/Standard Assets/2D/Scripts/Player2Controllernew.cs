
using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets._2D
{
	[RequireComponent(typeof (Player2Char))]
	public class Player2Controllernew : MonoBehaviour
	{
		private Player2Char m_Character;
		private bool m_Jump;
		
		
		private void Awake()
		{
			m_Character = GetComponent<Player2Char>();
		}
		
		
		private void Update()
		{
			if (!m_Jump)
			{
				// Read the jump input in Update so button presses aren't missed.
				m_Jump = CrossPlatformInputManager.GetButtonDown("Jump2");
			}
		}
		
		
		private void FixedUpdate()
		{
			// Read the inputs.
			bool crouch = Input.GetKey(KeyCode.LeftControl);
			float h = CrossPlatformInputManager.GetAxis("Horizontal2");
			// Pass all parameters to the character control script.
			m_Character.Move(h, crouch, m_Jump);
			m_Jump = false;
		}
	}
}
