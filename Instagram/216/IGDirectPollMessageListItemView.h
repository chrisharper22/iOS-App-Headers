//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectHorizontalBadgedFacepileView, IGDirectPollMessageListItemViewModel, IGSimpleProgressView, UILabel;

@interface IGDirectPollMessageListItemView : UIView
{
    IGDirectPollMessageListItemViewModel *_viewModel;
    UILabel *_optionLabel;
    IGSimpleProgressView *_progressView;
    struct CGSize _contentSize;
    IGDirectHorizontalBadgedFacepileView *_facepileView;
}

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

