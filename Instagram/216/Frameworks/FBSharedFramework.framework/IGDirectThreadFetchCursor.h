//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGDirectThreadFetchCursor : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_nextPage_previousCursor;
    NSString *_messageIsland_anchorMessageCursor;
}

+ (id)nextPageWithPreviousCursor:(id)arg1;
+ (id)messageIslandWithAnchorMessageCursor:(id)arg1;
+ (id)firstPage;
- (void).cxx_destruct;
- (void)matchFirstPage:(CDUnknownBlockType)arg1 nextPage:(CDUnknownBlockType)arg2 messageIsland:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanFirstPage:(CDUnknownBlockType)arg1 nextPage:(CDUnknownBlockType)arg2 messageIsland:(CDUnknownBlockType)arg3;

@end

