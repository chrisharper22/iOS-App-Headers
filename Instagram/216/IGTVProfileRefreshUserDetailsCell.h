//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGProfileAvatarView, IGTapButton, UIActivityIndicatorView, UILabel, UIView;
@protocol IGTVProfileRefreshUserDetailsCellDelegate;

@interface IGTVProfileRefreshUserDetailsCell : UICollectionViewCell
{
    UIView *_followingButton;
    _Bool _broadcastHasGuests;
    IGTapButton *_suggestedUsersButton;
    UIActivityIndicatorView *_suggestedUsersButtonSpinner;
    IGProfileAvatarView *_avatarView;
    UILabel *_fullNameLabel;
    UILabel *_followersLabel;
    id <IGTVProfileRefreshUserDetailsCellDelegate> _delegate;
}

+ (double)preferredHeightForViewModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVProfileRefreshUserDetailsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *followersLabel; // @synthesize followersLabel=_followersLabel;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) IGProfileAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void)_rotateButton;
- (void)_didTapSuggestedUsers;
- (void)showSuggestedUsersButtonSpinner:(_Bool)arg1 requestFailed:(_Bool)arg2;
- (void)configureWithButton:(id)arg1 fullNameText:(id)arg2 followersText:(id)arg3 broadcastHasGuests:(_Bool)arg4;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

