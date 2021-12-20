//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTextField, IGTokenSearchFieldSpec, NSString, UILabel;
@protocol IGTextFieldDelegate;

@interface IGTokenSearchField : UIView
{
    UILabel *_typeaheadLabel;
    UIView *_backgroundView;
    IGTokenSearchFieldSpec *_searchFieldSpec;
    _Bool _hasTypeaheadBeenHidden;
    NSString *_currentQuery;
    id <IGTextFieldDelegate> _delegate;
    IGTextField *_searchTextField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) __weak id <IGTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSearchTextFieldEnablesReturnKeyAutomatically:(_Bool)arg1;
- (void)updateSearchFieldPlaceholderAttributedText:(id)arg1;
- (void)updateSearchFieldPlaceholderText:(id)arg1;
- (void)updateSearchFieldText:(id)arg1;
- (id)searchFieldText;
- (void)updateTypeaheadText:(id)arg1 newQuery:(id)arg2;
- (id)typeaheadText;
- (void)setTypeaheadTokenIsHidden:(_Bool)arg1 newQuery:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)layoutSubviews;
- (void)_setupSearchFieldSpec:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 searchFieldSpec:(id)arg2 tokenType:(unsigned long long)arg3 textFieldDelegate:(id)arg4;

@end
