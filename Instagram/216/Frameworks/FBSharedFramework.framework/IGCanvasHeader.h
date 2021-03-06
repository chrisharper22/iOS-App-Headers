//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGCanvasElement-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSArray, NSString, UIColor;

@interface IGCanvasHeader : NSObject <IGCanvasElement, NSCoding>
{
    NSString *_loggingToken;
    long long _elementIndex;
    UIColor *_backgroundColor;
    unsigned long long _alignment;
    struct UIEdgeInsets _insets;
    double _borderWidth;
    UIColor *_borderColor;
    double _cornerRadius;
    NSArray *_headerElements;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *headerElements; // @synthesize headerElements=_headerElements;
- (double)cornerRadius;
- (id)borderColor;
- (double)borderWidth;
- (struct UIEdgeInsets)insets;
- (unsigned long long)alignment;
- (id)backgroundColor;
- (long long)elementIndex;
- (id)loggingToken;
- (unsigned long long)elementType;
- (id)initWithResponse:(id)arg1 index:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

