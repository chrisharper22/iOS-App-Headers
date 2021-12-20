//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol FBPayFormCellViewModelDelegate;

@interface FBPayFormCellViewModel : NSObject
{
    NSString *_emptyErrorMessage;
    _Bool _useValueFormatterDuringInput;
    _Bool _isOptional;
    _Bool _isDisabled;
    _Bool _userDidMakeEdits;
    id <FBPayFormCellViewModelDelegate> _delegate;
    NSString *_identifier;
    NSString *_fieldValue;
    NSString *_fieldName;
    UIViewController *_targetViewController;
    struct FBPayFormCellConfiguration _formCellConfiguration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(nonatomic) _Bool userDidMakeEdits; // @synthesize userDidMakeEdits=_userDidMakeEdits;
@property(nonatomic) struct FBPayFormCellConfiguration formCellConfiguration; // @synthesize formCellConfiguration=_formCellConfiguration;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isOptional; // @synthesize isOptional=_isOptional;
@property(nonatomic) _Bool useValueFormatterDuringInput; // @synthesize useValueFormatterDuringInput=_useValueFormatterDuringInput;
@property(copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(copy, nonatomic) NSString *fieldValue; // @synthesize fieldValue=_fieldValue;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <FBPayFormCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isCompleted;
@property(readonly, nonatomic) _Bool shouldFocus;
@property(readonly, nonatomic) _Bool hasSelectAction;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)displayTextValue;
@property(readonly, nonatomic) long long textAutocorrectionType;
@property(readonly, nonatomic) long long textAutocapitalizationType;
@property(readonly, nonatomic) long long keyboardType;
@property(readonly, nonatomic) long long type;
- (id)initWithIdentifier:(id)arg1 fieldName:(id)arg2 fieldValue:(id)arg3 emptyErrorMessage:(id)arg4 formCellConfiguration:(struct FBPayFormCellConfiguration)arg5;

@end

