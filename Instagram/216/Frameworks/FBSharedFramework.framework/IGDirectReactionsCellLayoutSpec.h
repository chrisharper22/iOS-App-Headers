//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGDirectReactionsCellLayoutSpec : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    double _leftAligned_padding;
    double _rightAligned_padding;
}

+ (id)rightAlignedWithPadding:(double)arg1;
+ (id)leftAlignedWithPadding:(double)arg1;
+ (id)incomingSpec;
+ (id)outgoingSpec;
- (void)matchLeftAligned:(CDUnknownBlockType)arg1 rightAligned:(CDUnknownBlockType)arg2;
- (double)matchDoubleLeftAligned:(CDUnknownBlockType)arg1 rightAligned:(CDUnknownBlockType)arg2;

@end

