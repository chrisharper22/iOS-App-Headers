//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGIABAutofillSoftKeyboardBodySectionControllerDelegate-Protocol.h"
#import "IGIABAutofillSoftKeyboardFooterSectionControllerDelegate-Protocol.h"
#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IABAutofillData, IGIABAutofillSoftKeyboardFooterView, IGIABAutofillSoftKeyboardHeaderView, IGKeyboardObserver, IGListAdapter, NSArray, NSString, UICollectionView, UIView;
@protocol IGIABSoftKeyboardControllerDelegate;

@interface IGIABAutofillSoftKeyboardViewController : IGViewController <IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGListAdapterDataSource, IGIABAutofillSoftKeyboardBodySectionControllerDelegate, IGIABAutofillSoftKeyboardFooterSectionControllerDelegate>
{
    UIView *_hairline;
    IGIABAutofillSoftKeyboardHeaderView *_header;
    IGIABAutofillSoftKeyboardFooterView *_footer;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    IGKeyboardObserver *_keyboardObserver;
    double _nativeKeyboardHeight;
    _Bool _nativeKeyboardShown;
    IABAutofillData *_autofillData;
    NSArray *_cards;
    id <IGIABSoftKeyboardControllerDelegate> _delegate;
    UIView *_softKeyboardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *softKeyboardView; // @synthesize softKeyboardView=_softKeyboardView;
- (void)footerSectionDidTapButton;
- (void)didTapCell:(id)arg1;
- (void)_animateKeyboardwithDuration:(double)arg1 withFrame:(struct CGRect)arg2 withCurve:(long long)arg3;
- (struct CGRect)_newKeyboardFrameForEndFrame:(struct CGRect)arg1 onScreen:(_Bool)arg2;
- (void)_moveKeyboardToEndFrame:(struct CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 onScreen:(_Bool)arg4;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)configureWithPaymentCards:(id)arg1;
- (void)configureWithContactAutofillData:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
