//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayFormViewModel.h>

@class FBPayLegalName, NSString;

@interface FBPayLegalNameFormViewModel : FBPayFormViewModel
{
    FBPayLegalName *_legalName;
    CDUnknownBlockType _mutatorAction;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
- (id)subtitle;
- (id)title;
- (void)_onError:(id)arg1;
- (void)_onSuccess;
- (void)save;
- (id)initWithLegalName:(id)arg1 mutatorAction:(CDUnknownBlockType)arg2;

@end

