//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/IGStoryPostCaptureHeaderViewType-Protocol.h>

@class IGCreationActionBar, IGCreationActionBarButton, IGCreationBarButtonItem, IGGradientColorToggleButton, IGStoryPostCaptureHeaderSpec, NSArray, NSMutableDictionary, NSString, UIControl, UIView;
@protocol IGCreationPostCaptureHeaderViewDelegate;

@interface IGCreationPostCaptureHeaderView : IGPassthroughView <IGStoryPostCaptureHeaderViewType>
{
    IGCreationActionBar *_toolbar;
    IGCreationBarButtonItem *_cancelButtonItem;
    IGCreationBarButtonItem *_moreButtonItem;
    NSMutableDictionary *_barButtonItemsForButtonTypes;
    NSArray *_overflowButtonTypes;
    _Bool _promoteEffectsButton;
    _Bool _usePlusOverflowIcon;
    _Bool _moveEditBoomerangButtonToOverflow;
    IGStoryPostCaptureHeaderSpec *_headerSpec;
    IGCreationActionBarButton *_cancelButton;
    UIControl *_addTextButton;
    UIControl *_addDrawingButton;
    UIControl *_undoButton;
    UIControl *_addVoiceoverButton;
    IGCreationActionBarButton *_audioMixButton;
    UIControl *_addStickerButton;
    UIControl *_saveButton;
    UIControl *_musicButton;
    IGCreationActionBarButton *_toggleAudioButton;
    UIControl *_editBoomerangButton;
    UIControl *_editPhotoBoothButton;
    UIControl *_editMotionFilterButton;
    UIControl *_addBrandedContentButton;
    IGCreationActionBarButton *_addStoryLinkButton;
    UIControl *_arEffectsButton;
    IGGradientColorToggleButton *_gradientButton;
    UIControl *_trimButton;
    long long _addStoryLinkButtonIconStyle;
    UIControl *_moreButton;
    id <IGCreationPostCaptureHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCreationPostCaptureHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool moveEditBoomerangButtonToOverflow; // @synthesize moveEditBoomerangButtonToOverflow=_moveEditBoomerangButtonToOverflow;
@property(nonatomic) _Bool usePlusOverflowIcon; // @synthesize usePlusOverflowIcon=_usePlusOverflowIcon;
@property(nonatomic) _Bool promoteEffectsButton; // @synthesize promoteEffectsButton=_promoteEffectsButton;
@property(readonly, nonatomic) UIControl *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) long long addStoryLinkButtonIconStyle; // @synthesize addStoryLinkButtonIconStyle=_addStoryLinkButtonIconStyle;
@property(readonly, nonatomic) UIControl *trimButton; // @synthesize trimButton=_trimButton;
@property(readonly, nonatomic) IGGradientColorToggleButton *gradientButton; // @synthesize gradientButton=_gradientButton;
@property(readonly, nonatomic) UIControl *arEffectsButton; // @synthesize arEffectsButton=_arEffectsButton;
@property(retain, nonatomic) IGCreationActionBarButton *addStoryLinkButton; // @synthesize addStoryLinkButton=_addStoryLinkButton;
@property(readonly, nonatomic) UIControl *addBrandedContentButton; // @synthesize addBrandedContentButton=_addBrandedContentButton;
@property(readonly, nonatomic) UIControl *editMotionFilterButton; // @synthesize editMotionFilterButton=_editMotionFilterButton;
@property(readonly, nonatomic) UIControl *editPhotoBoothButton; // @synthesize editPhotoBoothButton=_editPhotoBoothButton;
@property(readonly, nonatomic) UIControl *editBoomerangButton; // @synthesize editBoomerangButton=_editBoomerangButton;
@property(retain, nonatomic) IGCreationActionBarButton *toggleAudioButton; // @synthesize toggleAudioButton=_toggleAudioButton;
@property(readonly, nonatomic) UIControl *musicButton; // @synthesize musicButton=_musicButton;
@property(readonly, nonatomic) UIControl *saveButton; // @synthesize saveButton=_saveButton;
@property(readonly, nonatomic) UIControl *addStickerButton; // @synthesize addStickerButton=_addStickerButton;
@property(retain, nonatomic) IGCreationActionBarButton *audioMixButton; // @synthesize audioMixButton=_audioMixButton;
@property(readonly, nonatomic) UIControl *addVoiceoverButton; // @synthesize addVoiceoverButton=_addVoiceoverButton;
@property(readonly, nonatomic) UIControl *undoButton; // @synthesize undoButton=_undoButton;
@property(readonly, nonatomic) UIControl *addDrawingButton; // @synthesize addDrawingButton=_addDrawingButton;
@property(readonly, nonatomic) UIControl *addTextButton; // @synthesize addTextButton=_addTextButton;
@property(retain, nonatomic) IGCreationActionBarButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) IGStoryPostCaptureHeaderSpec *headerSpec; // @synthesize headerSpec=_headerSpec;
- (void)_updateAddStoryLinkButtonSelectedState;
@property(readonly, nonatomic) UIView *viewForGradientButtonLongPress;
- (void)_didTapMoreButton;
- (void)_didTapGradientButtonWrapper;
- (void)_updateButtons;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_createButtonForButtonType:(unsigned long long)arg1 iconAsset:(unsigned long long)arg2;
- (id)_createButtonForButtonType:(unsigned long long)arg1 image:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

