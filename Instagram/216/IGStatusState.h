//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class THStatusContent;

@interface IGStatusState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    THStatusContent *_some_statusContent;
}

+ (id)someWithStatusContent:(id)arg1;
+ (id)none;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 some:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 some:(CDUnknownBlockType)arg2;

@end

