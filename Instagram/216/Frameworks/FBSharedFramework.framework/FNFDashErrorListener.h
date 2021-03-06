//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashErrorListening-Protocol.h>

@class NSError, NSString;
@protocol FNFDashErrorHandling;

@interface FNFDashErrorListener : NSObject <FNFDashErrorListening>
{
    id <FNFDashErrorHandling> _handler;
    NSError *_dashError;
}

- (void).cxx_destruct;
- (void)retryAttemptForError:(id)arg1 errorData:(id)arg2;
- (void)didAlertWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
- (void)networkCallDidWarnWithError:(id)arg1;
- (void)networkCallDidFailWithError:(id)arg1;
- (void)didFailToPlayWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
- (id)failureReason;
- (_Bool)hasFailed;
- (id)initWithErrorHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

