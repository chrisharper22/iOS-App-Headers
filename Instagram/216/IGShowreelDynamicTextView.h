//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGCustomTextLayoutManager, NSTextContainer, NSTextStorage;

@interface IGShowreelDynamicTextView : UIView
{
    IGCustomTextLayoutManager *_captionLayoutManager;
    NSTextContainer *_captionTextContainer;
    NSTextStorage *_captionTextStorage;
    double _lineFragmentPadding;
    IGCoreTextView *_textView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCoreTextView *textView; // @synthesize textView=_textView;
- (void)setLinkHandler:(id)arg1;
- (void)setStyledString:(id)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)init;

@end

