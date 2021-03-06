//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGARLinkScannerLoggingProtocol-Protocol.h"

@class IGUserSession, NSString;

@interface IGNametagLoggingContext : NSObject <IGARLinkScannerLoggingProtocol>
{
    double _sessionStartTime;
    IGUserSession *_userSession;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (double)_elapsedTime;
- (void)logIsAlreadyFollowingUser:(id)arg1;
- (void)didTapProfileButtonForUser:(id)arg1;
- (void)logScannedSelfNametagIsFromCamera:(_Bool)arg1;
- (void)logAlreadyRequestedToFollowUser:(id)arg1;
- (void)didTapFollowButtonForUser:(id)arg1;
- (void)didTapViewSelfNameTagButton;
- (void)cannotFindUserWithTimeTaken:(double)arg1 errorCode:(long long)arg2 fromCamera:(_Bool)arg3 username:(id)arg4;
- (void)didFindUser:(id)arg1 withTimeTaken:(double)arg2 confidenceScore:(double)arg3 fromCamera:(_Bool)arg4;
- (void)didTapScanButton;
- (void)didEndSession:(id)arg1 initByGesture:(_Bool)arg2;
- (void)didStartSession:(id)arg1 hasCameraPermission:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

