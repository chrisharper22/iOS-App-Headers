//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStoryViewerEntryView-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGLiveCuratorContainerView, IGLiveWithStackedTrayAvatarView, IGProfileImage, IGProfilePhotoViewActiveBadge, IGProfilePictureImageView, IGRingViewSpec, IGStoryBadgeView, IGStoryGradientRingView, NSString, UIColor, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol IGProfilePhotoViewDelegate, IGProfilePhotoViewLiveStackedDelegate;

@interface IGProfilePhotoView : UIView <UIGestureRecognizerDelegate, IGStoryViewerEntryView>
{
    IGStoryGradientRingView *_storyRingView;
    IGStoryBadgeView *_storyBadgeView;
    UIImageView *_emptyStoryBadgeView;
    IGProfilePhotoViewActiveBadge *_activeBadgeView;
    IGLiveCuratorContainerView *_igLivePulseView;
    IGLiveWithStackedTrayAvatarView *_igLiveStackedView;
    UITapGestureRecognizer *_profileTapGestureRecognizer;
    UILongPressGestureRecognizer *_profileLongPressRecognizer;
    _Bool _showProfileImageBorder;
    _Bool _preferHDProfilePicture;
    _Bool _showStoryRing;
    _Bool _showStoryBadgeView;
    _Bool _showEmptyBadgeView;
    _Bool _showActiveBadgeView;
    _Bool _layoutWithinStoryRingFrame;
    _Bool _showIGLivePulseView;
    _Bool _showIGLiveStackedView;
    IGProfileImage *_profileImage;
    IGProfilePictureImageView *_profilePicImageView;
    UIColor *_profileImageTintColor;
    UIColor *_profileImageBackgroundColor;
    long long _profileImageContentMode;
    NSString *_profileImageAdditionalAccessibilityHint;
    long long _size;
    IGRingViewSpec *_storyRingSpec;
    id <IGProfilePhotoViewDelegate> _delegate;
    id <IGProfilePhotoViewLiveStackedDelegate> _liveStackedDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProfilePhotoViewLiveStackedDelegate> liveStackedDelegate; // @synthesize liveStackedDelegate=_liveStackedDelegate;
@property(nonatomic) __weak id <IGProfilePhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showIGLiveStackedView; // @synthesize showIGLiveStackedView=_showIGLiveStackedView;
@property(nonatomic) _Bool showIGLivePulseView; // @synthesize showIGLivePulseView=_showIGLivePulseView;
@property(nonatomic) _Bool layoutWithinStoryRingFrame; // @synthesize layoutWithinStoryRingFrame=_layoutWithinStoryRingFrame;
@property(nonatomic) _Bool showActiveBadgeView; // @synthesize showActiveBadgeView=_showActiveBadgeView;
@property(nonatomic) _Bool showEmptyBadgeView; // @synthesize showEmptyBadgeView=_showEmptyBadgeView;
@property(nonatomic) _Bool showStoryBadgeView; // @synthesize showStoryBadgeView=_showStoryBadgeView;
@property(retain, nonatomic) IGRingViewSpec *storyRingSpec; // @synthesize storyRingSpec=_storyRingSpec;
@property(nonatomic) _Bool showStoryRing; // @synthesize showStoryRing=_showStoryRing;
@property(nonatomic) _Bool preferHDProfilePicture; // @synthesize preferHDProfilePicture=_preferHDProfilePicture;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *profileImageAdditionalAccessibilityHint; // @synthesize profileImageAdditionalAccessibilityHint=_profileImageAdditionalAccessibilityHint;
@property(nonatomic) _Bool showProfileImageBorder; // @synthesize showProfileImageBorder=_showProfileImageBorder;
@property(nonatomic) long long profileImageContentMode; // @synthesize profileImageContentMode=_profileImageContentMode;
@property(retain, nonatomic) UIColor *profileImageBackgroundColor; // @synthesize profileImageBackgroundColor=_profileImageBackgroundColor;
@property(retain, nonatomic) UIColor *profileImageTintColor; // @synthesize profileImageTintColor=_profileImageTintColor;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePicImageView; // @synthesize profilePicImageView=_profilePicImageView;
@property(retain, nonatomic) IGProfileImage *profileImage; // @synthesize profileImage=_profileImage;
- (void)setLoading:(_Bool)arg1;
- (id)previewImageView;
- (id)profilePicture;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_liveStackedViewTapped:(id)arg1;
- (void)_livePulseViewLongPress:(id)arg1;
- (void)_livePulseViewTapped:(id)arg1;
- (void)_profilePictureLongPress:(id)arg1;
- (void)_profilePictureTapped:(id)arg1;
- (void)_createIGLiveStackedViewIfNeeded;
- (void)_createIGLivePulseViewIfNeeded;
- (void)_createActiveBadgeIfNeeded;
- (void)_createEmptyStoryBadgeIfNeeded;
- (void)_createStoryRingIfNeeded;
@property(readonly, nonatomic) IGLiveWithStackedTrayAvatarView *igLiveStackedView;
@property(readonly, nonatomic) IGLiveCuratorContainerView *igLivePulseView;
@property(readonly, nonatomic) double storyRingWidthDifference;
@property(readonly, nonatomic) _Bool hasAnyStoryRing;
- (_Bool)isAnimatingStoryRing;
- (void)endAnimatingStoryRingAfterCurrentLoop;
- (void)endAnimatingStoryRing;
- (void)startAnimationStoryRingWithStyle:(unsigned long long)arg1;
- (void)updateBadgeBorderWidth:(double)arg1;
- (void)configureBadgeWithType:(id)arg1 gradientLayerWithRingSpec:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imagePriority:(long long)arg2 placeholderImage:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 imagePriority:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

