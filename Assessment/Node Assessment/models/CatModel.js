const mongoose = require('mongoose');

mongoose.connect('mongodb://127.0.0.1:27017/12sepmernstack')
// mongoose.connect('mongodb+srv://vm877711:QMoGpxEep27mDtFt@cluster0.jbi1h.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0')
    .then(() => console.log('Connected to DB'));
  
const schema = mongoose.Schema;

const categorySchema = new schema({
  name: { type: String, required: true },
});

const Category = mongoose.model("Category", categorySchema);

const subCategorySchema = new schema({
  name: { type: String, required: true },
  subcatimg:{ type: String, required: true },
  category: { type: mongoose.Schema.Types.ObjectId, ref: "Category", required: true },
});

const SubCategory = mongoose.model("SubCategory", subCategorySchema);

// const catSchema = new schema({
//     catname:String
// })

// const CatModel = mongoose.model('category', catSchema);
// module.exports = CatModel;  


module.exports = { Category, SubCategory };




