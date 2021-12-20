//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSArray, NSMutableDictionary;

@interface IGSettingsFollowAndInviteModel : NSObject
{
    NSArray *_followAndInviteData;
    NSArray *_rowTypes;
    NSMutableDictionary *_stringToRowTypeDictionary;
    NSArray *_additionalItems;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (long long)rowTypeForTitleString:(id)arg1;
- (id)followAndInviteTextArray;
- (long long)rowCount;
- (long long)followAndInviteRowForRow:(long long)arg1;
- (id)textForRow:(long long)arg1;
- (void)updateModel;
- (id)initWithUserSession:(id)arg1 additionalItems:(id)arg2;

@end

