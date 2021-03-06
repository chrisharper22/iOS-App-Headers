//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGCommentReshareRecord, IGUserSession, NSAttributedString, NSString;

@interface IGCommentReshareRecordSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    IGCommentReshareRecord *_record;
    NSString *_analyticsModule;
    NSAttributedString *_confirmationString;
}

+ (id)_blueAttributes;
+ (id)_greyAttributes;
+ (id)_confirmationStringFromUsernames:(id)arg1 sender:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *confirmationString; // @synthesize confirmationString=_confirmationString;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGCommentReshareRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

@end

