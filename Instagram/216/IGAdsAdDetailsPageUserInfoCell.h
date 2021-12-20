//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGAdsAdDetailsPageSectionalItem, IGProfilePictureImageView, IGUser, IGUserStore, IGUsernameLabel, UITextView;

@interface IGAdsAdDetailsPageUserInfoCell : UICollectionViewCell
{
    IGAdsAdDetailsPageSectionalItem *_rawResponse;
    IGUserStore *_userStore;
    IGUser *_advertiserUser;
    IGUsernameLabel *_advertiserUsernameLabel;
    UITextView *_advertiserContextAndFollowerCountTextView;
    IGProfilePictureImageView *_profileImageView;
}

- (void).cxx_destruct;
- (void)_setupProfileImageView;
- (void)_setupAdvertiserContextAndFollowerCountLabel;
- (void)_setupAdvertiserUsernameLabel;
- (void)layoutSubviews;
- (void)configureWithRawResponse:(id)arg1 userStore:(id)arg2;

@end

