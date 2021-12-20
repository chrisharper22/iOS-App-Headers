//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

@class UIView;
@protocol IGVideoLayerSectionControllerDelegate;

@interface IGVideoLayerSectionController : IGListGenericSectionController
{
    _Bool _selected;
    _Bool _showMoreOptions;
    id <IGVideoLayerSectionControllerDelegate> _delegate;
    CDUnknownBlockType _indicatorViewLoader;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType indicatorViewLoader; // @synthesize indicatorViewLoader=_indicatorViewLoader;
@property(nonatomic, getter=shouldShowMoreOptions) _Bool showMoreOptions; // @synthesize showMoreOptions=_showMoreOptions;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <IGVideoLayerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reloadIndicatorView;
@property(readonly, nonatomic) UIView *indicatorView;
- (void)_didTapMoreOptionsIndicator;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;

@end

