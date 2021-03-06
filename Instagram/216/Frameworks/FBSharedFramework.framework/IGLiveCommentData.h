//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGLiveCommentData : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _actionCommentData_selected;
    NSString *_actionCommentData_buttonTitle;
    NSString *_actionCommentData_commentTitle;
    long long _systemCommentData_supportTier;
    long long _systemCommentData_badgeCount;
    _Bool _joinCommentData_hasWaved;
    long long _joinCommentData_joinCount;
    long long _userCommentData_supportTier;
    long long _userCommentData_badgeCount;
    _Bool _userCommentData_shouldProfilePictureGlow;
}

+ (id)userCommentDataWithSupportTier:(long long)arg1 badgeCount:(long long)arg2 shouldProfilePictureGlow:(_Bool)arg3;
+ (id)systemCommentDataWithSupportTier:(long long)arg1 badgeCount:(long long)arg2;
+ (id)joinCommentDataWithHasWaved:(_Bool)arg1 joinCount:(long long)arg2;
+ (id)debugLiveSwapAction;
+ (id)actionCommentDataWithSelected:(_Bool)arg1 buttonTitle:(id)arg2 commentTitle:(id)arg3;
- (void).cxx_destruct;
- (_Bool)matchBooleanActionCommentData:(CDUnknownBlockType)arg1 systemCommentData:(CDUnknownBlockType)arg2 joinCommentData:(CDUnknownBlockType)arg3 userCommentData:(CDUnknownBlockType)arg4 debugLiveSwapAction:(CDUnknownBlockType)arg5;
- (void)matchActionCommentData:(CDUnknownBlockType)arg1 systemCommentData:(CDUnknownBlockType)arg2 joinCommentData:(CDUnknownBlockType)arg3 userCommentData:(CDUnknownBlockType)arg4 debugLiveSwapAction:(CDUnknownBlockType)arg5;
- (long long)userCommentSupporterBadgeCount;

@end

