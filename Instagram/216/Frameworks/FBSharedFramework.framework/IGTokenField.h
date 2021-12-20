//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGDynamicCollectionViewDatasource-Protocol.h>
#import <FBSharedFramework/IGDynamicCollectionViewDelegate-Protocol.h>
#import <FBSharedFramework/IGTextFieldDelegate-Protocol.h>
#import <FBSharedFramework/IGTokenViewDelegate-Protocol.h>
#import <FBSharedFramework/UITextFieldDelegate-Protocol.h>

@class IGDynamicCollectionView, IGTableLayoutSpec, IGTokenFieldTheme, IGTokenSearchField, NSMutableArray, NSMutableOrderedSet, NSSet, NSString, UILabel;
@protocol IGTokenFieldDelegate;

@interface IGTokenField : UIView <IGDynamicCollectionViewDatasource, IGDynamicCollectionViewDelegate, IGTextFieldDelegate, IGTokenViewDelegate, UITextFieldDelegate>
{
    IGTokenFieldTheme *_tokenFieldTheme;
    IGTokenSearchField *_tokenSearchField;
    _Bool _useTypeaheadRedesign;
    _Bool _isEditing;
    _Bool _shadowVisible;
    _Bool _isDisabled;
    unsigned long long _tokenType;
    id <IGTokenFieldDelegate> _delegate;
    NSMutableOrderedSet *_tokens;
    NSMutableArray *_tokenViews;
    UIView *_borderedView;
    IGDynamicCollectionView *_collectionView;
    UILabel *_titleLabel;
    IGTableLayoutSpec *_tableInterface;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGDynamicCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain, nonatomic) NSMutableArray *tokenViews; // @synthesize tokenViews=_tokenViews;
@property(retain, nonatomic) NSMutableOrderedSet *tokens; // @synthesize tokens=_tokens;
@property(nonatomic) __weak id <IGTokenFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(readonly, nonatomic) unsigned long long tokenType; // @synthesize tokenType=_tokenType;
@property(nonatomic) _Bool shadowVisible; // @synthesize shadowVisible=_shadowVisible;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)_updateTextFieldLayout;
- (void)layoutSubviews;
- (void)collectionView:(id)arg1 didChangeContentSize:(struct CGSize)arg2;
- (void)collectionView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)collectionView:(id)arg1 didTapItemAtIndex:(long long)arg2;
- (id)viewForCollectionView:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfViewsForCollectionView:(id)arg1;
- (void)tokenViewWantsDelete:(id)arg1 replacementString:(id)arg2;
- (void)tokenViewDidResignFirstResponder:(id)arg1;
- (void)tokenViewDidBecomeFirstResponder:(id)arg1;
- (void)_checkEditingStatus;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)_currentResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateCollectionViewEdgeInsetForQuery:(id)arg1;
- (void)_updateSearchFieldPlaceholder;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidTapBackspaceKey:(id)arg1 previousText:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (double)tokenFieldHeight;
- (void)setCollectionViewEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)removeTokens:(id)arg1 animated:(_Bool)arg2;
- (void)removeToken:(id)arg1 animated:(_Bool)arg2;
- (void)addTokens:(id)arg1 animated:(_Bool)arg2;
- (void)addToken:(id)arg1 animated:(_Bool)arg2;
- (void)updateTypeaheadText:(id)arg1;
- (id)_viewForToken:(id)arg1;
- (void)updateSearchTokenFieldEnablesReturnKeyAutomatically:(_Bool)arg1;
- (void)updateTokenSearchFieldQuery:(id)arg1;
- (_Bool)_checkSearchFieldNeedsHideAutocomplete;
- (id)searchQuery;
- (id)searchField;
- (id)_titleLabelText;
- (_Bool)_shouldShowTitleLabel;
@property(readonly, nonatomic) NSSet *tokenObjects;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithTokenFieldType:(unsigned long long)arg1 tokenFieldTheme:(id)arg2 useTypeaheadRedesign:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
