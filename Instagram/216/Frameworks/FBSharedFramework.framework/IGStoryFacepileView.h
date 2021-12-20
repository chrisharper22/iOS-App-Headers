//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGProfilePictureImageViewDelegate-Protocol.h>

@class IGCircularIconView, IGStoryAddPillView, IGStoryOverflowView, NSArray, NSString;
@protocol IGStoryFacepileViewDelegate;

@interface IGStoryFacepileView : UIView <IGProfilePictureImageViewDelegate>
{
    UIView *_avatarContainer;
    NSArray *_avatarViews;
    double _avatarDiameter;
    double _overlap;
    double _lineWidth;
    long long _stackingDirection;
    long long _stackingStyle;
    long long _borderStyle;
    long long _overflowCount;
    IGStoryOverflowView *_overflowPillView;
    IGStoryAddPillView *_addPillView;
    _Bool _isAvatarTappable;
    long long _overflowStyle;
    IGCircularIconView *_leftAccessoryView;
    NSArray *_users;
    id <IGStoryFacepileViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryFacepileViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
- (void)_playFanOutAnimation;
- (void)_prepareForFanOutAnimation;
- (void)playFanOutAnimationWithDelay:(double)arg1;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_setupOverflowPill;
- (void)_didTapAddPillView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_borderColor;
- (double)_borderWidth;
- (void)_layoutAvatarsAndUpdateMask;
- (void)_setUsers:(id)arg1 overflowCount:(long long)arg2 module:(id)arg3 leftAccessoryView:(long long)arg4 addButton:(_Bool)arg5;
- (void)setUsers:(id)arg1 overflowCount:(long long)arg2 addButton:(_Bool)arg3 module:(id)arg4;
- (void)setUsers:(id)arg1 overflowCount:(long long)arg2 module:(id)arg3 leftAccessoryView:(long long)arg4;
- (void)setUsers:(id)arg1 overflowCount:(long long)arg2 module:(id)arg3;
- (id)initWithAvatarDiameter:(double)arg1 overlap:(double)arg2 lineWidth:(double)arg3 stackingDirection:(long long)arg4 stackingStyle:(long long)arg5 borderStyle:(long long)arg6 isAvatarTappable:(_Bool)arg7 overflowStyle:(long long)arg8;
- (id)initWithAvatarDiameter:(double)arg1 overlap:(double)arg2 lineWidth:(double)arg3 stackingDirection:(long long)arg4 stackingStyle:(long long)arg5 borderStyle:(long long)arg6 isAvatarTappable:(_Bool)arg7;
- (id)initWithAvatarDiameter:(double)arg1 overlap:(double)arg2 lineWidth:(double)arg3 stackingStyle:(long long)arg4 borderStyle:(long long)arg5 isAvatarTappable:(_Bool)arg6;
- (id)initWithAvatarDiameter:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
