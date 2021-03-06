//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, NSString;
@protocol IGVisualSearchMediaGlintViewDelegate;

@interface IGVisualSearchMediaGlintView : UIView
{
    IGTapButton *_glintView;
    id <IGVisualSearchMediaGlintViewDelegate> _delegate;
    NSString *_detectedObjectID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detectedObjectID; // @synthesize detectedObjectID=_detectedObjectID;
@property(nonatomic) __weak id <IGVisualSearchMediaGlintViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapGlint;
- (void)layoutSubviews;
- (id)initWithTapPadding:(double)arg1;

@end

