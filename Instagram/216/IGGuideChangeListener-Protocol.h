//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGScopedListener-Protocol.h"

@class IGGuide;

@protocol IGGuideChangeListener <IGScopedListener>
- (void)didReportGuide:(IGGuide *)arg1;
- (void)didDeleteGuide:(IGGuide *)arg1;
- (void)didUpdateGuide:(IGGuide *)arg1;
- (void)didPublishGuide:(IGGuide *)arg1;
@end

