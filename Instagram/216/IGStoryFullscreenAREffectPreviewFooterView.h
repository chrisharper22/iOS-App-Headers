//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAREffectSaveListener-Protocol.h"

@class IGTapButton, NSString;
@protocol IGStoryFullscreenAREffectPreviewFooterViewDelegate;

@interface IGStoryFullscreenAREffectPreviewFooterView : UIView <IGAREffectSaveListener>
{
    IGTapButton *_ctaButton;
    IGTapButton *_saveButton;
    IGTapButton *_sendButton;
    IGTapButton *_moreButton;
    unsigned long long _saveState;
    NSString *_effectID;
    id <IGStoryFullscreenAREffectPreviewFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak id <IGStoryFullscreenAREffectPreviewFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)arEffectSavingController:(id)arg1 didChangeSaveState:(unsigned long long)arg2 forAREffectID:(id)arg3;
- (void)_didTapMore;
- (void)_didTapSend;
- (void)_didTapSave;
- (void)_didTapTryIt:(id)arg1;
- (void)_configureCTAButton:(_Bool)arg1;
- (void)_updateSaveState:(unsigned long long)arg1;
- (void)configureWithViewModel:(id)arg1 saveController:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
