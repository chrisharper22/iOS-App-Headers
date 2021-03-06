//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGLabel, UIButton;

@interface IGLibraryAccessPromptView : UIView
{
    UIView *_contentView;
    UIButton *_instructionButton;
    IGLabel *_titleLabel;
    IGLabel *_explanationLabel;
    IGLabel *_instructionLabel;
}

+ (void)showLibraryDeniedAlertView;
- (void).cxx_destruct;
@property(retain, nonatomic) IGLabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) IGLabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(retain, nonatomic) IGLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *instructionButton; // @synthesize instructionButton=_instructionButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_instructionButtonDidTap:(id)arg1;
- (void)_attachViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

