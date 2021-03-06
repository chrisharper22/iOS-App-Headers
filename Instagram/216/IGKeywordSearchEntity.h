//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGHashtagModel, IGUser;

@interface IGKeywordSearchEntity : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUser *_user;
    IGHashtagModel *_hashtag;
}

+ (id)user:(id)arg1;
+ (id)hashtag:(id)arg1;
- (void).cxx_destruct;
- (void)matchUser:(CDUnknownBlockType)arg1 hashtag:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanUser:(CDUnknownBlockType)arg1 hashtag:(CDUnknownBlockType)arg2;

@end

