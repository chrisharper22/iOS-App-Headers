//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGUser, IGUserSession, NSString;

@protocol IGDirectPseudoBlockStringsProviding <NSObject>
- (NSString *)pseudoBlockAlertSubtitleStringForTargetUser:(IGUser *)arg1 userSession:(IGUserSession *)arg2;
- (NSString *)pseudoBlockAlertTitleStringForTargetUser:(IGUser *)arg1 userSession:(IGUserSession *)arg2 isRequest:(_Bool)arg3;
@end

