//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString, UIColor;

@protocol IGCanvasElement <NSObject>
- (double)cornerRadius;
- (UIColor *)borderColor;
- (double)borderWidth;
- (struct UIEdgeInsets)insets;
- (unsigned long long)alignment;
- (UIColor *)backgroundColor;
- (NSString *)loggingToken;
- (long long)elementIndex;
- (unsigned long long)elementType;
@end
