//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IGImageView, UIImageView, UILabel;

@interface IGLoginAutoCompleteCell : UITableViewCell
{
    IGImageView *_cellImageView;
    UILabel *_cellLabel;
    UILabel *_contactInfoLabel;
    UIImageView *_FBIconImageView;
    _Bool _isFBConnected;
    _Bool _hasContactInfo;
}

- (void).cxx_destruct;
- (void)configureWithUserInfo:(id)arg1 cellLabelText:(id)arg2 contactInfoText:(id)arg3 isFBConnected:(_Bool)arg4 module:(id)arg5;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

