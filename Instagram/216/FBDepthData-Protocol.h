//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBDepthData <NSObject>
- (void)convertToDepthDataType:(unsigned int)arg1;
- (float)pixelSize;
- (CDStruct_f1db2b5e)extrinsicMatrix;
- (struct CGSize)intrinsicMatrixReferenceDimensions;
- (CDStruct_d80e62f2)intrinsicMatrix;
- (struct __CVBuffer *)depthDataMap;
@end
