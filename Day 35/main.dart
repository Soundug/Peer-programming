import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
@override
Widget build(BuildContext context) {
	return MaterialApp(
	home: HomePage(),
	);
}
}

class HomePage extends StatefulWidget {
@override
_HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
@override
Widget build(BuildContext context) {
	return Scaffold(
	appBar: AppBar(
		title: Text("SheHeroes"),
		backgroundColor: Colors.blue,
	),
	body: Container(
		child: Center(
		child: ElevatedButton(
			onPressed: () {
			return showDialog(
				context: context,
				builder: (ctx) => AlertDialog(
				content: Text("Invalid user credentials. Please try again."),
				actions: <Widget>[
					TextButton(
					onPressed: () {
						Navigator.of(ctx).pop();
					},
					child: Text("OK"),
					),
				],
				),
			);
			},
			child: Text("Show alert Dialog box"),
		),
		),
	),
	);
}
}
