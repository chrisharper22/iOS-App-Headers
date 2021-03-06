//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface IGFormFieldPlaceholderView : UIView
{
    UILabel *_placeholderLabel;
    struct CGRect _previousFrame;
    _Bool _collapsed;
    _Bool _showError;
    NSString *_text;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showError; // @synthesize showError=_showError;
@property(nonatomic) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (double)collapsedPlaceholderHeight;
- (void)setShowError:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setCollapsed:(_Bool)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)setCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

