//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGProfilePictureImageViewDelegate-Protocol.h>

@class IGLabel, IGProfilePictureImageView, NSString, NSURL, UILabel;
@protocol IGStoryViewerBottomSheetLeftProfileWithSubtitleViewDelegate;

@interface IGStoryViewerBottomSheetLeftProfileWithSubtitleView : UIView <IGProfilePictureImageViewDelegate>
{
    IGProfilePictureImageView *_profileImageView;
    IGLabel *_nameLabel;
    UILabel *_subtitleLabel;
    UIView *_stackedLabelView;
    _Bool _verifiedBadgeVisible;
    NSURL *_profileImageURL;
    NSString *_name;
    id <IGStoryViewerBottomSheetLeftProfileWithSubtitleViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryViewerBottomSheetLeftProfileWithSubtitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool verifiedBadgeVisible; // @synthesize verifiedBadgeVisible=_verifiedBadgeVisible;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
- (void)_tappedNameLabel;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_updateNameAndVerifiedBadge;
@property(copy, nonatomic) NSString *subtitle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

