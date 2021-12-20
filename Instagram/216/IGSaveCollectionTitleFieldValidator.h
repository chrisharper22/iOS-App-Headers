//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString;
@protocol IGSaveCollectionTitleFieldValidatorDelegate;

@interface IGSaveCollectionTitleFieldValidator : NSObject <UITextFieldDelegate>
{
    id <IGSaveCollectionTitleFieldValidatorDelegate> _delegate;
}

+ (_Bool)isValidCollectionTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSaveCollectionTitleFieldValidatorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

