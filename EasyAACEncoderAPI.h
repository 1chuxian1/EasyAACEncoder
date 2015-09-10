/*
	Copyright (c) 2013-2015 EasyDarwin.ORG.  All rights reserved.
	Github: https://github.com/EasyDarwin
	WEChat: EasyDarwin
	Website: http://www.easydarwin.org
*/
#ifndef EasyAACEncoder_API_H
#define	EasyAACEncoder_API_H

#ifdef _WIN32
#define Easy_API  __declspec(dllexport)
#define Easy_APICALL  __stdcall
#else
#define Easy_API
#define Easy_APICALL 
#endif

#define EasyAACEncoder_Handle void*

/* ��Ƶ���� */
#define EASY_SDK_AUDIO_CODEC_AAC	0x01000011		/* AAC */
#define EASY_SDK_AUDIO_CODEC_G711A	0x01000012		/* G711 alaw*/
#define EASY_SDK_AUDIO_CODEC_G711U	0x01000014		/* G711 ulaw*/
#define EASY_SDK_AUDIO_CODEC_G726	0x01000018		/* G726 */

#ifdef __cplusplus
extern "C"
{
#endif
	/* ����AAC Encoder ����Ϊ���ֵ */
	Easy_API EasyAACEncoder_Handle Easy_APICALL Easy_AACEncoder_Init(unsigned int u32AudioCodec, unsigned int u32AudioSamplerate, unsigned int u32AudioChannel);

	/* ����������ݣ����ر�������� */
	Easy_API int Easy_APICALL Easy_AACEncoder_Encode(EasyAACEncoder_Handle handle, unsigned char* inbuf, unsigned int inlen, unsigned char* outbuf, unsigned int* outlen);

	/* �ͷ�AAC Encoder */
	Easy_API void Easy_APICALL Easy_AACEncoder_Release(EasyAACEncoder_Handle handle);

#ifdef __cplusplus
}
#endif

#endif	/* EasyAACEncoder_API_H */

