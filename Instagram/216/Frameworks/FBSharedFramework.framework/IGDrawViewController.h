//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IGDrawCanvasView, NSString, UITouch;
@protocol IGDrawBrushCommon, IGDrawControllerDelegate;

@interface IGDrawViewController : UIViewController
{
    IGDrawCanvasView *_canvasView;
    UITouch *_singleTouch;
    struct _GLKVector2 _lastPosition;
    double _currentStrokeLength;
    _Bool _wantsFillDraw;
    id <IGDrawBrushCommon> _drawBrush;
    NSString *_specialBrushVersion;
    id <IGDrawControllerDelegate> _delegate;
}

+ (double)sizeForBrush:(id)arg1 relativelyMatching:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDrawControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *specialBrushVersion; // @synthesize specialBrushVersion=_specialBrushVersion;
@property(retain, nonatomic) id <IGDrawBrushCommon> drawBrush; // @synthesize drawBrush=_drawBrush;
@property(retain, nonatomic) IGDrawCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (void)setAccessibilityFrame:(struct CGRect)arg1;
- (void)fillCanvasWithCurrentBrush;
- (id)createDrawingImage;
- (void)clearDrawing;
- (void)undoLastStroke;
@property(readonly, nonatomic) _Bool canUndo;
@property(readonly, nonatomic) _Bool hasStrokesMarkedInternal;
- (_Bool)hasStrokesWithBrushName:(id)arg1;
- (id)brushForName:(id)arg1;
@property(readonly, nonatomic) _Bool hasDrawing;
- (void)_onAppWillEnterForeground:(id)arg1;
- (void)_onAppWillResignActive:(id)arg1;
- (void)_handleGesture:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;

@end

