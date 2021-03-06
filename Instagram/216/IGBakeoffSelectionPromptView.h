//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBakeoffPromptTextView, IGBakeoffSelectionPrompt, IGBakeoffSelectionView;

@interface IGBakeoffSelectionPromptView : UIView
{
    IGBakeoffSelectionPrompt *_selectionPrompt;
    IGBakeoffSelectionView *_selectionView;
    IGBakeoffPromptTextView *_promptTextView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGBakeoffPromptTextView *promptTextView; // @synthesize promptTextView=_promptTextView;
@property(readonly, nonatomic) IGBakeoffSelectionView *selectionView; // @synthesize selectionView=_selectionView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupSelectionViewWithDelegate:(id)arg1 bakeoffSelectionPrompt:(id)arg2;
- (void)_setupPromptTextViewWithBakeoffSelectionPrompt:(id)arg1;
- (void)updateBakeoffSelectionPrompt:(id)arg1;
- (id)initWithSelectionViewDelegate:(id)arg1 bakeoffSelectionPrompt:(id)arg2;

@end

