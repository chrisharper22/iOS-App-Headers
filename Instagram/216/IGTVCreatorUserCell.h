//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDelayedBouncyCollectionViewCell.h>

@class IGProfilePictureImageView, IGTVCardView, IGTapButton, IGUser, UILabel, UIView;
@protocol IGTVCreatorUserCellDelegate;

@interface IGTVCreatorUserCell : IGDelayedBouncyCollectionViewCell
{
    IGUser *_user;
    IGTVCardView *_cardView;
    IGProfilePictureImageView *_profilePictureImageView;
    UILabel *_nameLabel;
    UILabel *_usernameLabel;
    UIView *_followControllerView;
    IGTapButton *_dismissButton;
    id <IGTVCreatorUserCellDelegate> _delegate;
}

+ (double)preferredHeightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVCreatorUserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapDismiss;
- (void)traitCollectionDidChange:(id)arg1;
- (void)configureWithUser:(id)arg1 showDismissButton:(_Bool)arg2 followControllerView:(id)arg3 analyticsModule:(id)arg4;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
