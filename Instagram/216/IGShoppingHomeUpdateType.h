//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSNumber;

@interface IGShoppingHomeUpdateType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSNumber *_section_feedType;
    long long _network_action;
}

+ (id)sectionWithFeedType:(id)arg1;
+ (id)networkWithAction:(long long)arg1;
- (void).cxx_destruct;
- (void)matchSection:(CDUnknownBlockType)arg1 network:(CDUnknownBlockType)arg2;

@end

