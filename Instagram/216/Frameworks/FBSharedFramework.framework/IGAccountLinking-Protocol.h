//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGUser, NSOrderedSet, NSString;
@protocol IGIdentifying, IGUserProviding;

@protocol IGAccountLinking <NSObject>
- (_Bool)passwordlessChildCanUnlinkFromMainWithChildAccountPK:(NSString *)arg1;
- (long long)linkingEligibilityForAccount:(IGUser<IGUserProviding> *)arg1;
- (void)updateAccountLinkingStateForLoggedInUsersIgnoringTTL:(_Bool)arg1;
- (void)createAccountLinkingGroupWithMainAccount:(IGUser<IGIdentifying> *)arg1 childAccounts:(NSOrderedSet *)arg2 completion:(void (^)(_Bool, NSString *, NSString *))arg3;
@end

