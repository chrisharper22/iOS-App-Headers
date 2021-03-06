//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGDirectShareSheetOneTapButtonViewModel : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)newCustomButtonViewModelWithSendState:(id)arg1 titleTexts:(id)arg2 accessibilityTexts:(id)arg3 accessibilityTarget:(id)arg4 additionalWordsToAccommodate:(id)arg5;
+ (id)newFeedSharingEditButtonViewModelWithSendState:(id)arg1 additionalWordsToAccomodate:(id)arg2;
+ (id)newCreateButtonViewModel;
+ (id)newInviteButtonViewModelWithSendState:(id)arg1 accessibilityTarget:(id)arg2 additionalWordsToAccommodate:(id)arg3;
+ (id)newSendButtonViewModelWithSendState:(id)arg1 accessibilityTarget:(id)arg2 additionalWordsToAccommodate:(id)arg3 recipientCount:(long long)arg4;
+ (id)newBorderlessSendButtonViewModelWithSendState:(id)arg1 accessibilityTarget:(id)arg2 additionalWordsToAccommodate:(id)arg3;
+ (id)newSendButtonViewModelWithSendState:(id)arg1 accessibilityTarget:(id)arg2 additionalWordsToAccommodate:(id)arg3;
+ (id)newShareButtonViewModelWithSendState:(id)arg1 accessibilityTarget:(id)arg2 additionalWordsToAccommodate:(id)arg3;
- (id)texts;
- (id)_initWithTexts:(id)arg1 accessibilityTexts:(id)arg2 additionalWordsToAccommodate:(id)arg3 state:(id)arg4 layoutSpec:(id)arg5;

@end

