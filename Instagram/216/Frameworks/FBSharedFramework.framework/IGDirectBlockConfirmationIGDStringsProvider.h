//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectBlockConfirmationStringsProviding-Protocol.h>

@class NSString;

@interface IGDirectBlockConfirmationIGDStringsProvider : NSObject <IGDirectBlockConfirmationStringsProviding>
{
}

- (id)blockAlertSubtitleStringForSession:(id)arg1 blockedUser:(id)arg2 isDirectEntryPoint:(_Bool)arg3 isSubscribed:(_Bool)arg4;
- (id)blockAlertTitleStringForSession:(id)arg1 blockedUser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

