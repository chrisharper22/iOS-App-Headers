//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FB_RTCRtpTransceiver-Protocol.h"

@class FB_RTCRtpReceiver, FB_RTCRtpSender, NSString, RTCPeerConnectionFactory;

@interface FB_RTCRtpTransceiver : NSObject <FB_RTCRtpTransceiver>
{
    RTCPeerConnectionFactory *_factory;
    scoped_refptr_f1ddbb35 _nativeRtpTransceiver;
    FB_RTCRtpSender *_sender;
    FB_RTCRtpReceiver *_receiver;
}

+ (long long)rtpTransceiverDirectionFromNativeDirection:(int)arg1;
+ (int)nativeRtpTransceiverDirectionFromDirection:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) FB_RTCRtpReceiver *receiver; // @synthesize receiver=_receiver;
@property(readonly, nonatomic) FB_RTCRtpSender *sender; // @synthesize sender=_sender;
- (id)initWithFactory:(id)arg1 nativeRtpTransceiver:(scoped_refptr_f1ddbb35)arg2;
@property(readonly, nonatomic) scoped_refptr_f1ddbb35 nativeRtpTransceiver;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)stop;
- (_Bool)currentDirection:(long long *)arg1;
@property(nonatomic) long long direction;
@property(readonly, nonatomic) _Bool isStopped;
@property(readonly, nonatomic) NSString *mid;
@property(readonly, nonatomic) long long mediaType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
