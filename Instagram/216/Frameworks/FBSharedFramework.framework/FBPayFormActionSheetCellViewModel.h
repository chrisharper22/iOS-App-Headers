//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayFormCellViewModel.h>

@class NSArray, NSString;

@interface FBPayFormActionSheetCellViewModel : FBPayFormCellViewModel
{
    NSString *_actionTitle;
    NSString *_actionMessage;
    NSArray *_actions;
}

- (void).cxx_destruct;
- (id)targetViewController;
- (_Bool)hasSelectAction;
- (long long)type;
- (id)initWithIdentifier:(id)arg1 fieldName:(id)arg2 fieldValue:(id)arg3 actionTitle:(id)arg4 actionMessage:(id)arg5 actions:(id)arg6;

@end
