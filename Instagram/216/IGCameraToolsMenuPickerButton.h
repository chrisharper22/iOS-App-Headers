//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGCameraToolsMenuPickerDelegate-Protocol.h"
#import "IGCameraToolsMenuPresentationViewControllerAccessibilityProvider-Protocol.h"
#import "IGCameraToolsMenuPresentationViewControllerDelegate-Protocol.h"
#import "IGCameraToolsMenuTool-Protocol.h"

@class IGBouncyButton, IGCameraToolsMenuPicker, IGCameraToolsMenuPickerItem, IGCameraToolsMenuPresentationViewController, IGCameraToolsMenuToolLabel, IGGradientView, NSArray, NSString, UIImpactFeedbackGenerator;
@protocol IGCameraToolsMenuPickerButtonDelegate;

@interface IGCameraToolsMenuPickerButton : IGPassthroughView <IGCameraToolsMenuPickerDelegate, IGCameraToolsMenuPresentationViewControllerAccessibilityProvider, IGCameraToolsMenuPresentationViewControllerDelegate, IGCameraToolsMenuTool>
{
    IGBouncyButton *_bouncyButton;
    IGCameraToolsMenuToolLabel *_label;
    IGCameraToolsMenuPicker *_picker;
    IGCameraToolsMenuPresentationViewController *_expandedViewController;
    IGGradientView *_protectionGradient;
    _Bool _expanded;
    double _titleAlpha;
    double _pickerExpansionPercentage;
    UIImpactFeedbackGenerator *_impactGenerator;
    _Bool _selected;
    _Bool _titleVisible;
    NSString *_identifier;
    long long _loggingKey;
    id <IGCameraToolsMenuPickerButtonDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCameraToolsMenuPickerButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long loggingKey; // @synthesize loggingKey=_loggingKey;
@property(nonatomic, getter=isTitleVisible) _Bool titleVisible; // @synthesize titleVisible=_titleVisible;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)_triggerHapticKick;
- (void)picker:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)cameraToolsMenuPresentationViewControllerWillDismiss:(id)arg1;
- (void)cameraToolsMenuPresentationViewControllerDidTapBackground:(id)arg1;
- (id)accessibilityElementsForCameraToolsMenuPresentationViewController:(id)arg1;
- (void)_setTitleAlpha:(double)arg1 animated:(_Bool)arg2;
- (void)setTitleVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didTapBouncyButton:(id)arg1;
- (void)_setPickerExpansionPercentage:(double)arg1 animated:(_Bool)arg2 didApplyBlock:(CDUnknownBlockType)arg3;
- (void)_setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long selectedIndex;
@property(retain, nonatomic) IGCameraToolsMenuPickerItem *defaultItem;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (id)initWithItems:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

