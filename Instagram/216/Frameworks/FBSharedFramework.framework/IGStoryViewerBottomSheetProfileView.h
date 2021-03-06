//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBouncyButton, IGImageView, NSString, NSURL, UIColor, UIImage, UIImageView, UILabel;

@interface IGStoryViewerBottomSheetProfileView : UIView
{
    IGBouncyButton *_profileButton;
    IGImageView *_profileImageView;
    UILabel *_nameLabel;
    UIImageView *_verifiedBadge;
    UIImageView *_profilePictureAccessoryImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGBouncyButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) UIImage *profilePictureAccessoryImage;
@property(nonatomic) _Bool verifiedBadgeVisible;
@property(copy, nonatomic) UIColor *nameTextColor;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) NSURL *pictureURL;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

