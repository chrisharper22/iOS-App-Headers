//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGCanvasElement-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGCanvasPhoto, IGCanvasProductInfo, IGCanvasTextBlock, NSString, UIColor;

@interface IGCanvasProduct : NSObject <IGCanvasElement, NSCoding>
{
    NSString *_loggingToken;
    long long _elementIndex;
    UIColor *_backgroundColor;
    unsigned long long _alignment;
    struct UIEdgeInsets _insets;
    double _borderWidth;
    UIColor *_borderColor;
    double _cornerRadius;
    IGCanvasPhoto *_photo;
    IGCanvasTextBlock *_productInfo;
    IGCanvasTextBlock *_price;
    NSString *_productSetId;
    IGCanvasProductInfo *_productInfoModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCanvasProductInfo *productInfoModel; // @synthesize productInfoModel=_productInfoModel;
@property(readonly, copy, nonatomic) NSString *productSetId; // @synthesize productSetId=_productSetId;
@property(readonly, nonatomic) IGCanvasTextBlock *price; // @synthesize price=_price;
@property(readonly, nonatomic) IGCanvasTextBlock *productInfo; // @synthesize productInfo=_productInfo;
@property(readonly, nonatomic) IGCanvasPhoto *photo; // @synthesize photo=_photo;
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
