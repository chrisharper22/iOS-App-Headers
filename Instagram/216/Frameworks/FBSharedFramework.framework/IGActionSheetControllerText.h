//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, NSString;

@interface IGActionSheetControllerText : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_regularText_text;
    NSString *_boldText_text;
    NSString *_regularTextWithBoldRanges_text;
    NSArray *_regularTextWithBoldRanges_boldRanges;
}

+ (id)regularTextWithText:(id)arg1;
+ (id)regularTextWithBoldRangesWithText:(id)arg1 boldRanges:(id)arg2;
+ (id)boldTextWithText:(id)arg1;
- (void).cxx_destruct;
- (void)matchRegularText:(CDUnknownBlockType)arg1 boldText:(CDUnknownBlockType)arg2 regularTextWithBoldRanges:(CDUnknownBlockType)arg3;

@end

