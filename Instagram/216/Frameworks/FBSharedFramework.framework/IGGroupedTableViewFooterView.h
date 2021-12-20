//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, NSString, UILabel;

@interface IGGroupedTableViewFooterView : UIView
{
    UILabel *_textLabel;
    UIView *_separatorView;
    NSString *_annotatedText;
    IGCoreTextView *_coreTextView;
}

+ (double)heightWithText:(id)arg1 contentWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IGCoreTextView *coreTextView; // @synthesize coreTextView=_coreTextView;
@property(retain, nonatomic) NSString *annotatedText; // @synthesize annotatedText=_annotatedText;
- (double)heightWithContentWidth:(double)arg1;
- (double)heightWithAnnotatedText;
- (void)layoutSubviews;
- (void)_configureCoreTextViewWithAnnotatedString:(id)arg1 linkedHandler:(id)arg2;
- (void)_configureTextLabelWithText:(id)arg1;
@property(nonatomic) _Bool isShowingSeparator;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAnnotatedString:(id)arg1 linkHandler:(id)arg2;
- (id)initWithText:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
