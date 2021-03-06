//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectShareRecipient, IGDirectShareSheetOneTapButtonState, NSArray, NSString;

@interface IGDirectRecipientOneTapTarget : NSObject
{
    NSString *_uniqueIdentifier;
    int _targetType;
    IGDirectShareSheetOneTapButtonState *_oneTapButtonState;
    long long _externalSharingServiceType;
    IGDirectShareRecipient *_recipient;
    NSArray *_blastList;
    NSString *_messageText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(readonly, nonatomic) NSArray *blastList; // @synthesize blastList=_blastList;
@property(readonly, nonatomic) IGDirectShareRecipient *recipient; // @synthesize recipient=_recipient;
@property(readonly, nonatomic) long long externalSharingServiceType; // @synthesize externalSharingServiceType=_externalSharingServiceType;
@property(readonly, nonatomic) int targetType; // @synthesize targetType=_targetType;
@property(readonly, nonatomic) IGDirectShareSheetOneTapButtonState *oneTapButtonState; // @synthesize oneTapButtonState=_oneTapButtonState;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithOneTapButtonState:(id)arg1 targetType:(int)arg2 externalShareServiceType:(long long)arg3 recipient:(id)arg4 blastList:(id)arg5 messageText:(id)arg6;

@end

