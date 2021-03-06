//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGRadioButton, IGUserSession, UIImageView, UILabel;
@protocol IGSundialUpsellRowDelegate;

@interface IGSundialUpsellRow : UIView
{
    unsigned long long _upsellRowType;
    IGUserSession *_userSession;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGRadioButton *_radioButton;
    _Bool _isSelected;
    id <IGSundialUpsellRowDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) __weak id <IGSundialUpsellRowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_accessibilityLabel;
- (void)_selectRadioButton;
- (void)layoutSubviews;
- (id)initWithUpsellRowType:(unsigned long long)arg1 selected:(_Bool)arg2 isPublicAccount:(_Bool)arg3 userSession:(id)arg4;

@end

